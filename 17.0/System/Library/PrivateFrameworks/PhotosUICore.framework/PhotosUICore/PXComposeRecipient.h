@class NSString, CNContact, NSDictionary, PXRecipient;
@protocol PXPersonSuggestion;

@interface PXComposeRecipient : NSObject <NSCopying, PXTapToRadar>

@property (readonly, nonatomic) PXRecipient *recipient;
@property (readonly, nonatomic) id<PXPersonSuggestion> personSuggestion;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersonSuggestion:(id)a0;
- (id)initWithPersonSuggestion:(id)a0 contact:(id)a1;
- (id)initWithRecipient:(id)a0;

@end
