@class NSMutableDictionary, NSDate;

@interface FPImportCookie : NSObject <NSSecureCoding> {
    NSDate *lastModificationDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *entries;

+ (BOOL)clearCookieForDomainURL:(id)a0 error:(id *)a1;
+ (BOOL)isImportingDomainsForUserURL:(id)a0;
+ (BOOL)isImportingInVolumeAtURL:(id)a0;
+ (BOOL)writeCookieForDomainURL:(id)a0 error:(id *)a1;

- (void)addEntry:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)hasExpired;
- (id)initWithCoder:(id)a0;
- (BOOL)isEmpty;
- (void)removeEntryForPathRelativeToVolumeRoot:(id)a0;

@end
