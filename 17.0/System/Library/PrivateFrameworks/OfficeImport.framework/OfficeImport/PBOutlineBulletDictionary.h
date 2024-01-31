@class NSMutableDictionary;

@interface PBOutlineBulletDictionary : NSObject {
    NSMutableDictionary *mDictionary;
}

- (void).cxx_destruct;
- (id)initFromContainer:(id)a0 objectType:(unsigned int)a1;
- (id)objectForSlideId:(unsigned int)a0 textType:(int)a1 placeholderIndex:(unsigned int)a2;

@end
