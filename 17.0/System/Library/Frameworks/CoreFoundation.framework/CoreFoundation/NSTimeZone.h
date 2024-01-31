@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSData *data;

+ (id)_abbreviationDictionary;
+ (id)_autoupdating;
+ (id)_current;
+ (id)_default;
+ (id)_knownTimeZoneIdentifiers;
+ (id)_resetSystemTimeZone;
+ (void)_setAbbreviationDictionary:(id)a0;
+ (void)_setDefaultTimeZone:(id)a0;
+ (id)_timeZoneDataVersion;
+ (id)_timeZoneWithAbbreviation:(id)a0;
+ (id)_timeZoneWithName:(id)a0;
+ (id)_timeZoneWithName:(id)a0 data:(id)a1;
+ (id)_timeZoneWithName:(id)a0 tryAbbrev:(BOOL)a1;
+ (id)_timeZoneWithSecondsFromGMT:(long long)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)localTimeZone;
+ (id)timeZoneWithName:(id)a0;
+ (id)defaultTimeZone;
+ (id)abbreviationDictionary;
+ (id)systemTimeZone;
+ (id)timeZoneForSecondsFromGMT:(long long)a0;
+ (id)timeZoneWithAbbreviation:(id)a0;
+ (id)knownTimeZoneNames;
+ (void)resetSystemTimeZone;
+ (void)setAbbreviationDictionary:(id)a0;
+ (void)setDefaultTimeZone:(id)a0;
+ (id)timeZoneDataVersion;
+ (id)timeZoneWithName:(id)a0 data:(id)a1;

- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_cfTypeID;
- (long long)secondsFromGMTForDate:(id)a0;
- (unsigned long long)hash;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)initWithName:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)description;
- (BOOL)isNSTimeZone__;
- (long long)secondsFromGMT;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)abbreviation;
- (double)daylightSavingTimeOffset;
- (BOOL)isDaylightSavingTime;
- (BOOL)isEqualToTimeZone:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (id)nextDaylightSavingTimeTransition;

@end
