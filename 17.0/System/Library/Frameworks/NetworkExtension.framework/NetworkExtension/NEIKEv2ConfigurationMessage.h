@class NSArray;

@interface NEIKEv2ConfigurationMessage : NSObject <NEPrettyDescription, NSCopying> {
    unsigned long long _configurationType;
    NSArray *_attributes;
}

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWithAttributes:(id)a0;

@end
