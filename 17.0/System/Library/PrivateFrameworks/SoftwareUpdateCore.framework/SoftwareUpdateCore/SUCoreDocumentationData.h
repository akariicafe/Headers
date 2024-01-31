@class NSString, NSData;

@interface SUCoreDocumentationData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic) NSString *humanReadableUpdateTitle;
@property (retain, nonatomic) NSString *humanReadableUpdateVersion;
@property (retain, nonatomic) NSData *readme;
@property (retain, nonatomic) NSData *readmeSummary;
@property (retain, nonatomic) NSData *license;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDocumentationDataDictionary:(id)a0;

@end
