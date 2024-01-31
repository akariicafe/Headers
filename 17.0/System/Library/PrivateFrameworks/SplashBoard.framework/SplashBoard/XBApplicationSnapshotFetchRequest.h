@class NSArray, XBApplicationSnapshotPredicate, NSString, XBApplicationSnapshotGenerationContext;

@interface XBApplicationSnapshotFetchRequest : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSArray *NSSortDescriptors;
@property (retain, nonatomic) XBApplicationSnapshotPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (retain, nonatomic) XBApplicationSnapshotGenerationContext *fallbackGenerationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
