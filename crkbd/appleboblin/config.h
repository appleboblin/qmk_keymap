#pragma once
//#define USE_MATRIX_I2C
// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_WPM_ENABLE
//#define SPLIT_OLED_ENABLE
//#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 225
#define TAPPING_TERM_PER_KEY
#pragma once
#define I2C_DRIVER I2CD1
#define COMBO_COUNT 4
#define COMBO_ONLY_FROM_LAYER 0
#define COMBO_TERM 50
#define OLED_TIMEOUT 30000
//#define OLED_FADE_OUT
//#define OLED_FADE_OUT_INTERVAL 5
#define RGB_MATRIX_TIMEOUT 60000
#define RGB_DI_PIN D3
#define DRIVER_LED_TOTAL 54
#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"


// animation
#define ENABLE_MOON            // Uses 182 bytes
#define ENABLE_WAVE            // Uses 844 bytes
#define ENABLE_SHOOTING_STARS  // Uses 872 bytes
#define ENABLE_ISLAND
#define ENABLE_STARS  // Uses 606 bytes

#define STARRY_NIGHT_ANIM_FRAME_DURATION 30  // how long each frame lasts in ms
#define NUMBER_OF_FRAMES 20                  // Self explanatory. Probably shouldn't touch this, not sure how stuff will work if it's changed. If changed should be multiple of 1, 2, 3, 4, and 5
#define WIDTH OLED_DISPLAY_HEIGHT            // for vertical displays
#define HEIGHT OLED_DISPLAY_WIDTH            // for vertical displays
// moon
#define MOON_LINE 4    // the line you want the moon to appear at
#define MOON_COLUMN 4  // the column you want the moon to appear at
//#define STATIC_MOON  // uncomment this to make the moon a static image, no animation
#ifndef STATIC_MOON
#    define ANIMATE_MOON_EVERY_N_FRAMES 100  // animate the moon every n frames
#endif
// ocean
#define OCEAN_LINE 14        // Line you want to render the ocean starting at (best at oled_max_lines() - 2)
#define WAVE_CALM 20         // render calm ocean under this WPM and ripple ocean at this WPM
#define WAVE_HEAVY_STORM 40  // render medium ocean at this WPM
#define WAVE_HURRICANE 60    // render heavy waves above this WPM
// What number of frames you want to animate the ocean at.
// Should be equal to or smaller than NUMBER_OF_FRAMES, e.g. 30, would animate on every other frame, 20, every third frame, etc
// Don't set equal to 0.
#define OCEAN_ANIMATION_SPEED 1
// island
#define ISLAND_LINE 12         // line that the island starts at. Island is 2 lines tall
#define ISLAND_COLUMN 0        // column that the island starts at
#define ISLAND_CALM 20         // WPM at which the palm tree calmly moves
#define ISLAND_HEAVY_STORM 40  // WPM at which the heavy storm occurs
#define ISLAND_HURRICANE 60    // WPM at which THE HURRICANE STARTS
// Stars
#define STARS_PER_LINE 4         // number of stars per line (for a display that is 128x32, this would be 4 stars spread out evenly over the 32byte width, one every 8 bytes)
#define NUMBER_OF_STAR_LINES 16  // number of lines to fill up with stars (for a display that is 128x32, 16 bytes are filled with the ocean animation, so that leaves 112 pixels left over. The number of lines depends on your OLED_FONT_HEIGHT)
#define TWINKLE_PROBABILITY 25   // probability that any star twinkles on a given frame
// What number of frames you want to animate the stars at.
// Should be equal to or smaller than NUMBER_OF_FRAMES, e.g. 20, would animate on every frame, 10, every other frame, etc
// Don't set equal to 0.
#define STAR_ANIMATION_SPEED 1
// Shooting stars
#define SHOOTING_STAR_DELAY 12           // delay modulus for time between shooting stars. Decides number of frames to delay, e.g. 12 means 0-11 frames of delay between each shooting star
#define SHOOTING_STAR_FRAMES 16          // how many 2 pixel frames per shooting star. Increment this for longer shooting stars
#define MAX_NUMBER_OF_SHOOTING_STARS 12  // maximum number of shooting stars that can be on screen at the same time
#define SHOOTING_STAR_WPM_INCREMENT 10   // every n WPM increase, add an extra star, up to MAX_NUMBER_OF_SHOOTING_STARS, e.g. an increment of 5 would result in 1 shooting star at 5-9wpm, 2 at 10-14, etc.
// What number of frames you want to animate the shooting stars at.
// Should be equal to or smaller than NUMBER_OF_FRAMES, e.g. 30, would animate on every other frame, 20, every third frame, etc
// Don't set equal to 0.
#define SHOOTING_STAR_ANIMATION_SPEED 30
