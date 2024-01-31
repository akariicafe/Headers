@class NSArray, NSString, NSData, ATXTimeScheduledWidget, ATXPinnedTimeEvent;

@interface ATXTimeEventPresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *icons;
@property (readonly, nonatomic) BOOL overlapIcons;
@property (readonly, nonatomic) BOOL hasCheckbox;
@property (readonly, nonatomic) NSData *backgroundImageData;
@property (readonly, nonatomic) NSData *logoImageData;
@property (readonly, copy, nonatomic) NSArray *fields;
@property (readonly, nonatomic) ATXTimeScheduledWidget *widget;
@property (readonly, nonatomic) BOOL supportsRouteMap;
@property (readonly, nonatomic) ATXPinnedTimeEvent *pinnedTimeEvent;
@property (readonly, copy, nonatomic) NSString *subtitleGlyph;
@property (readonly, nonatomic) BOOL allowsRescheduling;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCardIcon:(id)a0 fields:(id)a1 backgroundImageData:(id)a2 logoImageData:(id)a3 subtitleGlyph:(id)a4 allowsRescheduling:(BOOL)a5;
- (id)initWithCardIcons:(id)a0 shouldOverlapIcons:(BOOL)a1 subtitleGlyph:(id)a2 hasCheckbox:(BOOL)a3 allowsRescheduling:(BOOL)a4;
- (id)initWithPinnedTimeEvent:(id)a0 subtitleGlyph:(id)a1 allowsRescheduling:(BOOL)a2;
- (id)initWithRouteMapIcons:(id)a0 subtitleGlyph:(id)a1 allowsRescheduling:(BOOL)a2;
- (id)initWithWidget:(id)a0 allowsRescheduling:(BOOL)a1;

@end
