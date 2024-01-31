@interface CRFormContentTypeUtilities : NSObject

+ (unsigned long long)contentTypeFromString:(id)a0;
+ (BOOL)contentTypeIsAddressComponent:(unsigned long long)a0;
+ (BOOL)contentTypeIsAutoFillable:(unsigned long long)a0;
+ (BOOL)contentTypeIsComponentType:(unsigned long long)a0 previousType:(unsigned long long)a1 nextType:(unsigned long long)a2;
+ (BOOL)contentTypeIsCreditCardComponent:(unsigned long long)a0;
+ (BOOL)contentTypeIsStartOfAutofillContext:(unsigned long long)a0 previousType:(unsigned long long)a1 nextType:(unsigned long long)a2;
+ (BOOL)contentTypeIsTelephoneComponent:(unsigned long long)a0;
+ (id)shortStringFromContentType:(unsigned long long)a0;
+ (BOOL)shouldAssignTextContentTypeForField:(id)a0 updateExternalFields:(BOOL)a1 allowOverride:(BOOL)a2 allowAllDetectionSources:(BOOL)a3;
+ (id)stringFromContentType:(unsigned long long)a0;

@end
