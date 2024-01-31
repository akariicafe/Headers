@class NSUUID, NSString, NSURL, UTType, ATXTimeEventLocation, NSArray, NSDate, NSData, ATXTimeEventIcon;

@interface ATXPinnedTimeEvent : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) UTType *uniformType;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long eventType;
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) double durationHint;
@property (readonly, nonatomic) ATXTimeEventLocation *location;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSData *iconData;
@property (readonly, copy, nonatomic) NSString *summary;
@property (readonly, copy, nonatomic) NSString *siteName;
@property (readonly, copy, nonatomic) ATXTimeEventIcon *icon;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 icon:(id)a1 location:(id)a2 sourceBundleIdentifier:(id)a3 durationHint:(double)a4 actions:(id)a5;
- (id)initWithTitle:(id)a0 icon:(id)a1 location:(id)a2 sourceBundleIdentifier:(id)a3 durationHint:(double)a4 actions:(id)a5 date:(id)a6 label:(id)a7;
- (id)initWithURL:(id)a0 sourceBundleIdentifier:(id)a1 iconData:(id)a2 title:(id)a3 summary:(id)a4 location:(id)a5 siteName:(id)a6 durationHint:(double)a7 actions:(id)a8;

@end
