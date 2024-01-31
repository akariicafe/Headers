@class NSString, UIImage;

@interface NTKPeopleComplicationEntry : NTKTimelineEntryModel {
    BOOL _isLocked;
}

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *abbreviation;
@property (readonly, nonatomic) UIImage *profileImage;

+ (id)lockedEntry;

- (void).cxx_destruct;
- (id)initWithFullName:(id)a0 abbreviation:(id)a1 profileImage:(id)a2;
- (id)templateForComplicationFamily:(long long)a0;

@end
