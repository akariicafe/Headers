@class TSTMasterLayout, NSMutableArray;

@interface TSTLayoutTask : NSObject {
    TSTMasterLayout *mMasterLayout;
}

@property (retain, nonatomic) NSMutableArray *cellStatesToLayout;

- (void)dealloc;
- (void)flushToGlobalCaches;
- (id)initWithMasterLayout:(id)a0;

@end
