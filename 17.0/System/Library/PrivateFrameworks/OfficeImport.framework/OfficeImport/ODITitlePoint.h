@class NSString;

@interface ODITitlePoint : ODIHorizonalList3 {
    NSString *mTitlePointPresentationName;
}

- (void).cxx_destruct;
- (id)initWithTitlePointPresentationName:(id)a0 state:(id)a1;
- (void)mapBaseStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapOnePillarStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapRoofStyleFromPoint:(id)a0 shape:(id)a1;

@end
