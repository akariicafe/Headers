@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection>

@property (retain, nonatomic) MFDataHolder *dataHolder;

- (BOOL)isComplete;
- (void)dealloc;
- (id)partName;
- (void).cxx_destruct;
- (BOOL)isPartial;

@end
