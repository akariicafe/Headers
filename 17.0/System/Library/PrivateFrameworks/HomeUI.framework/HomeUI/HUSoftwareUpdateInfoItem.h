@class NSString, NSAttributedString, NSSet;

@interface HUSoftwareUpdateInfoItem : HFItem

@property (retain, nonatomic) NSString *releaseNotesHTMLString;
@property (retain, nonatomic) NSAttributedString *releaseNotesAttributedString;
@property (readonly, nonatomic) NSSet *accessories;

+ (id)_dateFormatter;
+ (id)_iconDescriptorForAccessories:(id)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAccessories:(id)a0;
- (id)_releaseNotesResultsFuture;
- (id)_subclass_updateWithOptions:(id)a0;

@end
