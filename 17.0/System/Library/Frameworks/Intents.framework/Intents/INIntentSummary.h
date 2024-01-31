@class NSString;

@interface INIntentSummary : NSObject

@property (readonly, copy, nonatomic) NSString *intentIdentifier;
@property (readonly, copy, nonatomic) NSString *originatingBundleId;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) unsigned long long containedProperties;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (id)initWithIntentIdentifier:(id)a0 originatingBundleId:(id)a1 languageCode:(id)a2;

@end
