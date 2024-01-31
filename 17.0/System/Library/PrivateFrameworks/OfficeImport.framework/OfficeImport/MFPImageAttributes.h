@class NSMutableDictionary;

@interface MFPImageAttributes : NSObject {
    NSMutableDictionary *mColorAdjustMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)colorAdjustWithType:(int)a0;
- (id)ensureColorAdjustWithType:(int)a0;

@end
