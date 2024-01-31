@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection>

@property (retain, nonatomic) MFDataHolder *dataHolder;

- (BOOL)isComplete;
- (void)dealloc;
- (id)partName;
- (BOOL)isPartial;

@end
