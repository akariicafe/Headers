@class NSString, CNContact;
@protocol PXPerson;

@interface PXPeopleMeDataSource : NSObject <PXPeopleMeViewControllerDataSource>

@property (retain, nonatomic) id<PXPerson> suggestedPerson;
@property (retain, nonatomic) CNContact *meContact;
@property (nonatomic, getter=hasRequestedSuggestedPerson) BOOL requestedSuggestedPerson;
@property (nonatomic, getter=hasRequestedMeContact) BOOL requestedMeContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_fetchPersonWithUri:(id)a0;
- (void)_persistSuggestedPersonAsMe;
- (void)_requestMeContactWithCompletion:(id /* block */)a0;
- (id)_suggestedPersonForMe;
- (void)hasSuggestedPersonForMeWithCompletion:(id /* block */)a0;
- (id)suggestedPersonForMeViewController:(id)a0;
- (void)userDidAnswerMeViewController:(id)a0 withResponse:(BOOL)a1 suggestedPerson:(id)a2;

@end
