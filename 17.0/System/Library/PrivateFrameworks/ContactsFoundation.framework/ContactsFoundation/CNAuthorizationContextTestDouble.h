@class NSString;

@interface CNAuthorizationContextTestDouble : NSObject <CNAuthorizationContext>

@property BOOL isNotesAccessGranted;
@property BOOL isAddressingGrammarAccessGranted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
