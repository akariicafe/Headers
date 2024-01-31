@class PDSlide;

@interface PBSlideObjAndMasterPair : NSObject {
    PDSlide *mSlide;
    int mMasterId;
}

+ (id)createPair:(id)a0 masterId:(int)a1;

- (id)slide;
- (void).cxx_destruct;
- (int)masterId;
- (void)setSlide:(id)a0 masterId:(int)a1;

@end
