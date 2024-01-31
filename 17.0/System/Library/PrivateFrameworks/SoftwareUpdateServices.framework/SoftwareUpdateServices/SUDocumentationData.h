@class NSString, NSData;

@interface SUDocumentationData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (retain, nonatomic) NSData *readme;
@property (retain, nonatomic) NSData *readmeSummary;
@property (retain, nonatomic) NSData *license;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSUCoreDocumentationData:(id)a0;

@end
