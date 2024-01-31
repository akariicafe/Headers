@class NSString;

@interface AMSSQLiteConnectionOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic) long long cacheSize;
@property (copy, nonatomic) NSString *protectionType;
@property (nonatomic, getter=isReadOnly) BOOL readOnly;

- (id)initWithDatabasePath:(id)a0;
- (int)applyToDatabase:(struct sqlite3 { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setCacheSizeWithNumberOfDatabasePages:(long long)a0;
- (void)setCacheSizeWithNumberOfKilobytes:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
