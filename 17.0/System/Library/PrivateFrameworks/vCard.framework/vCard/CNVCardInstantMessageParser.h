@interface CNVCardInstantMessageParser : NSObject

+ (id)handleWithUsername:(id)a0 userIdentifier:(id)a1 service:(id)a2 bundleIdentifiers:(id)a3 teamIdentifier:(id)a4;
+ (id)serviceForString:(id)a0;
+ (id)valueWithService:(id)a0 existingHandles:(id)a1 parser:(id)a2;

@end
