@class UPQuery, UPResult, UPModelIdentifier;
@protocol UPDialogAct;

@interface UPContextualizerInput : NSObject

@property (readonly, nonatomic) UPResult *domainResult;
@property (readonly, nonatomic) UPResult *coreResult;
@property (readonly, nonatomic) UPModelIdentifier *modelIdentifier;
@property (readonly, nonatomic) UPQuery *query;
@property (readonly, nonatomic) id<UPDialogAct> dialogAct;

- (void).cxx_destruct;
- (id)initWithDomainResult:(id)a0 coreResult:(id)a1 modelIdentifier:(id)a2 query:(id)a3 dialogAct:(id)a4;

@end
