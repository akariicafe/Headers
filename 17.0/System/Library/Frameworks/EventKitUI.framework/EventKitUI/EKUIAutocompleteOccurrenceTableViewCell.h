@class UIColor, NSArray, UIImageView, NSString, UILabel, NSAttributedString;

@interface EKUIAutocompleteOccurrenceTableViewCell : EKUIAutocompleteSearchResultCell {
    UIImageView *_colorDotView;
    UILabel *_titleTextLabel;
    UILabel *_locationTextLabel;
    UILabel *_timeTextLabelWithThisTimeZone;
    UILabel *_timeTextLabelWithResultTimeZone;
    UILabel *_inviteesTextLabel;
    UILabel *_foundInTextLabel;
    NSArray *_secondaryLabels;
    UIColor *_eventCalendarColor;
    NSString *_eventTitle;
    NSAttributedString *_eventLocation;
    NSString *_eventTimeWithThisTimeZone;
    NSString *_eventTimeWithResultTimeZone;
    NSString *_eventInvitees;
    NSAttributedString *_eventFoundIn;
    NSArray *_ekUIAutocompleteOccurrenceTableViewCellConstraints;
}

+ (id)reuseIdentifier;
+ (id)_foundInStringForResult:(id)a0 pasteboardEvent:(BOOL)a1;
+ (id)_inviteeStringForResult:(id)a0;
+ (id)_locationStringForResult:(id)a0;
+ (BOOL)_shouldShowOtherTimeZoneForResult:(id)a0;
+ (id)_timeStringForResult:(id)a0 usingTimeZone:(id)a1;
+ (id)_titleStringForResult:(id)a0;
+ (double)cellHeightForResult:(id)a0 forWidth:(double)a1;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithResult:(id)a0;
- (void)_addConstraintsForLabel:(id)a0 belowView:(id)a1 toArray:(id)a2;
- (void)setLabelFonts;

@end
