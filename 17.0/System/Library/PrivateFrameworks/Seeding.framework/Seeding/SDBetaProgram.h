@class NSString, NSURL, NSArray;

@interface SDBetaProgram : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long programID;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long program;
@property (retain, nonatomic) NSURL *catalog;
@property (retain, nonatomic) NSURL *assetUpdate;
@property (retain, nonatomic) NSURL *assetBrain;
@property (retain, nonatomic) NSString *assetAudience;
@property (retain, nonatomic) NSArray *legalDocs;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) NSString *buildPrefix;
@property (nonatomic) long long accountID;

+ (BOOL)isPad;
+ (id)betaProgramWithID:(long long)a0 title:(id)a1 program:(id)a2 catalog:(id)a3 assetUpdate:(id)a4 assetBrain:(id)a5 assetAudience:(id)a6 legalDocs:(id)a7 platform:(unsigned long long)a8 buildPrefix:(id)a9 accountID:(long long)a10;
+ (id)betaProgramWithJSON:(id)a0;
+ (id)nilIfNSNull:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(long long)a0 title:(id)a1 program:(id)a2 catalog:(id)a3 assetUpdate:(id)a4 assetBrain:(id)a5 assetAudience:(id)a6 legalDocs:(id)a7 platform:(unsigned long long)a8 buildPrefix:(id)a9 accountID:(long long)a10;

@end
