@class NSDictionary;

@interface OADImageRecolorInfo : NSObject {
    NSDictionary *mColors;
    NSDictionary *mFills;
}

- (id)colors;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)fills;
- (id)initWithColors:(id)a0 fills:(id)a1;

@end
