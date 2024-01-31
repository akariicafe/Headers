@interface PPSClientDonation : NSObject

+ (BOOL)isRegisteredSubsystem:(const char *)a0 category:(const char *)a1;
+ (struct PPSTelemetryIdentifier { char x0[512]; char x1[512]; } *)createIdentifierForSubsystem:(const char *)a0 category:(const char *)a1;
+ (void)sendEventWithIdentifier:(const struct PPSTelemetryIdentifier { char x0[512]; char x1[512]; } *)a0 payload:(struct __CFDictionary { } *)a1;

@end
