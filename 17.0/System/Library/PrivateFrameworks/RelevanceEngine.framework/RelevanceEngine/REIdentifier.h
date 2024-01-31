@class NSString;

@interface REIdentifier : NSString <NSCopying> {
    unsigned long long _hash;
    unsigned long long _length;
}

@property (readonly, nonatomic) NSString *dataSource;
@property (readonly, nonatomic) NSString *section;
@property (readonly, nonatomic) NSString *identifier;

- (unsigned long long)hash;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)isEqualToString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataSource:(id)a0 section:(id)a1 identifier:(id)a2;

@end
