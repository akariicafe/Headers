@class NSString;

@interface _SAUIElementViewControllerSnapshotAssertion : SAAssertion <SAElementIdentifying, SAUISnapshotReasonProviding>

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *snapshotReason;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (id)initWithElement:(id)a0 snapshotReason:(id)a1;

@end
