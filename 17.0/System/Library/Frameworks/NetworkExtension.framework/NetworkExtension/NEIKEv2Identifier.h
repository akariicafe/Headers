@class NSData, NSString;

@interface NEIKEv2Identifier : NSObject <NEPrettyDescription, NSCopying>

@property (retain) NSData *identifierData;
@property (readonly) NSString *stringValue;
@property (readonly) unsigned long long identifierType;

+ (id)copyTypeDescription;
+ (id)createIdentifierWithType:(unsigned long long)a0 data:(id)a1;
+ (id)createIdentifierWithType:(unsigned long long)a0 data:(id)a1 zone:(struct _NSZone { } *)a2;

- (unsigned long long)hash;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyShortDescription;

@end
