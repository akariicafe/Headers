@class PKPaper, NSMutableDictionary;

@interface PKPrintSettings : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_dict;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) PKPaper *paper;

+ (id)default;
+ (id)photo;
+ (id)printSettingsForPrinter:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)setOrientation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setQuality:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFileType:(id)a0;
- (void)setOutputMode:(id)a0;
- (void)setJobName:(id)a0;
- (void)setDuplex:(id)a0;
- (void)setCopies:(id)a0;
- (void)setFinishingTemplate:(id)a0;
- (id)getCopies;
- (id)getDuplex;
- (id)getJobName;
- (id)getOutputMode;
- (id)initWithPaper:(id)a0;
- (void)setFinishings:(id)a0;
- (void)setPWGPaperName:(id)a0;

@end
