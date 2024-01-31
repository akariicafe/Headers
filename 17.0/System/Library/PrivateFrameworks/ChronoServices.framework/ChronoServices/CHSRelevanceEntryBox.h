@class NSDictionary, NSData;

@interface CHSRelevanceEntryBox : NSObject <CHSXPCEncodable, NSCopying> {
    NSData *_archivedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *timelineRelevanceEntries;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)prepareForEncoding;

@end
