
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNViewShotSpec.h"

@interface ViewShot : NSObject <NativeViewShotSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ViewShot : NSObject <RCTBridgeModule>
#endif

@end
