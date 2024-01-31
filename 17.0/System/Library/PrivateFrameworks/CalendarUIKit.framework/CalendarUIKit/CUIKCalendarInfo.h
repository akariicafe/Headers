@class UIColor, NSString, CUIKGroupInfo, EKCalendar;

@interface CUIKCalendarInfo : NSObject {
    NSString *_title;
}

@property (retain, nonatomic) EKCalendar *calendar;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL selected;
@property (weak, nonatomic) CUIKGroupInfo *group;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) int displayOrder;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isPublished;
@property (readonly, nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) unsigned long long customGroupType;
@property (nonatomic) BOOL filteredByFocus;

- (id)description;
- (id)initWithCalendar:(id)a0;
- (void).cxx_destruct;
- (id)stringForSharedCalendar;
- (void)_updateCustomGroupType;

@end
