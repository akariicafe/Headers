@class DACActivityDescriptor, DACChangeMarker, NSDate;

@interface DACActivityListEntry : NSObject <NSSecureCoding, NSCopying> {
    DACActivityDescriptor *_activity;
    NSDate *_date;
    unsigned long long _reason;
    DACActivityDescriptor *_origin;
    DACChangeMarker *_changeMarker;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
