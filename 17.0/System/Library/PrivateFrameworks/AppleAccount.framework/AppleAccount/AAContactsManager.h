@class NSString;
@protocol AAContactsIDSStatusDelegate;

@interface AAContactsManager : NSObject <AACNContactsManager>

@property (weak, nonatomic) id<AAContactsIDSStatusDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_predicateForHandle:(id)a0;
- (id)contactForHandle:(id)a0;
- (id)contactForMe;
- (id)contactIDForHandle:(id)a0;
- (void)fetchIDSStatusForHandle:(id)a0;
- (void)idsStatusForHandle:(id)a0 completion:(id /* block */)a1;

@end
