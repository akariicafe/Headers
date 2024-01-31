@class NSSet, NSMutableArray, FBKGroupedDevice;

@interface FBKDeferredAttachmentCollection : NSObject

@property (retain, nonatomic) NSMutableArray *sortedAttachments;
@property (retain, nonatomic) FBKGroupedDevice *device;
@property (readonly, nonatomic) NSSet *allMatchers;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)deferredAttachmentsFromMatchers:(id)a0;
- (id)initDevice:(id)a0 matcherPredicates:(id)a1;

@end
