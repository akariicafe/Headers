@class NSError, NSString;

@interface BRCDesiredVersion : BRCVersion <PQLValuable> {
    union { unsigned int value; struct { unsigned char isFault : 1; unsigned char startDownload : 1; unsigned char wantsThumbnail : 1; unsigned char userInitiated : 1; unsigned char wantsContentForThumbnail : 1; } ; } _flags;
}

@property (retain, nonatomic) NSError *downloadError;
@property (readonly, nonatomic) NSString *serverName;
@property (nonatomic) unsigned int options;
@property (readonly, nonatomic) BOOL isFault;
@property (readonly, nonatomic) BOOL wantsContent;
@property (readonly, nonatomic) BOOL wantsContentForThumbnail;
@property (readonly, nonatomic) BOOL wantsThumbnail;
@property (readonly, nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;
+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;

- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)markLiveAsFault;
- (id)descriptionWithContext:(id)a0;
- (id)initWithDesiredVersion:(id)a0;
- (id)initWithServerVersion:(id)a0 serverName:(id)a1;
- (BOOL)isStillValidForEtag:(id)a0;

@end
