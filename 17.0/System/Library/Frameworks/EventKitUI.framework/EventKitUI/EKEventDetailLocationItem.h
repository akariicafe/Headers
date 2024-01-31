@class EKTextViewWithLabelTextMetrics, NSString, NSURL, UITapGestureRecognizer;

@interface EKEventDetailLocationItem : NSObject <UITextViewDelegate> {
    EKTextViewWithLabelTextMetrics *_locationView;
    NSURL *_locationURL;
    UITapGestureRecognizer *_locationTapRecognizer;
    BOOL _locationIsAttendee;
    long long _locationStatus;
    NSString *_locationComment;
}

@property BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (retain) NSString *locationTitle;
@property (retain) UITapGestureRecognizer *tapRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidLocation:(id)a0 event:(id)a1;

- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)a0;
- (void)updateAttributedString;
- (void)_locationTapped;
- (id)initWithLocationName:(id)a0 forEvent:(id)a1;
- (id)locationView;
- (void)updateLocation:(id)a0 forEvent:(id)a1;

@end
