@interface ECEmailAddressParser : NSObject

+ (BOOL)_validateString:(id)a0 withFunction:(void /* function */ *)a1;
+ (BOOL)validateDomain:(id)a0;
+ (BOOL)parseEmailAddressString:(id)a0 displayName:(id *)a1 localPart:(id *)a2 domain:(id *)a3 groupList:(id *)a4;
+ (BOOL)validateLocalPart:(id)a0;
+ (BOOL)parseString:(id)a0 emailAddressList:(id *)a1;
+ (BOOL)validateDisplayName:(id)a0;

@end
