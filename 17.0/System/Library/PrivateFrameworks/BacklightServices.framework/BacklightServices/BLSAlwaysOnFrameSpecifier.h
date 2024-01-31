@class NSArray, NSDateInterval;

@interface BLSAlwaysOnFrameSpecifier : NSObject <NSCopying> {
    long long _grantedFidelity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property long long grantedFidelity;
@property (readonly) NSArray *entrySpecifiers;
@property (readonly) NSDateInterval *presentationInterval;
@property (readonly) long long requestedFidelity;

+ (id)loggingStringForPresentationInterval:(id)a0;
+ (id)shortLoggingStringForPresentationInterval:(id)a0;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)entrySpecifierForTimelineIdentifier:(id)a0;
- (id)correctedSpecifierWithNextSpecifier:(id)a0;
- (id)initWithTimelineEntry:(id)a0 previousTimelineEntry:(id)a1;
- (id)initWithTimelineEntrySpecifiers:(id)a0 presentationInterval:(id)a1;

@end
