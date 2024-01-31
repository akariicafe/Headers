@class MFDataHolder, NSString;

@interface MFBasicMessageDataSection : NSObject <MFMessageDataSection>

@property (nonatomic, getter=isPartial) BOOL partial;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (retain, nonatomic) MFDataHolder *dataHolder;
@property (retain, nonatomic) NSString *partName;

- (void)dealloc;
- (void)setData:(id)a0;
- (void).cxx_destruct;

@end
