@class NSString;

@interface CUIKUserActivityRemindersListSharedInvitation : CUIKUserActivityWithSource

@property (readonly, nonatomic) NSString *title;

- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 title:(id)a1;
- (BOOL)_isMatchForSource:(id)a0 andTitle:(id)a1;

@end
