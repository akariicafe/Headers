@class NSString;
@protocol NSCopying;

@interface PKApplyRadioPickerTitleRow : NSObject <PKApplyCollectionViewRow> {
    NSString *_title;
}

@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
