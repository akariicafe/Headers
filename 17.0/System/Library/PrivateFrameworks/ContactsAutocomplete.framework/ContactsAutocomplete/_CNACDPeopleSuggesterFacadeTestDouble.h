@class NSString, NSMutableArray;
@protocol _CNACDPeopleSuggesterFacadeTestDoubleDelegate;

@interface _CNACDPeopleSuggesterFacadeTestDouble : NSObject <CNACDPeopleSuggesterFacade> {
    NSMutableArray *_suggestions;
}

@property (readonly) id<_CNACDPeopleSuggesterFacadeTestDoubleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)addPersonWithDisplayName:(id)a0 handle:(id)a1 contactIdentifier:(id)a2;
- (id)suggestPeopleWithContext:(id)a0 settings:(id)a1 error:(id *)a2;
- (unsigned long long)typeOfHandle:(id)a0;

@end
