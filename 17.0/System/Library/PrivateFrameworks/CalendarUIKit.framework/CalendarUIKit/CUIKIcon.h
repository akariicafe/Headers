@class ISIcon, NSDateComponents, NSCalendar;
@protocol CUIKIconGenerator;

@interface CUIKIcon : ISIcon

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, copy, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) id<CUIKIconGenerator> iconGenerator;
@property (retain, nonatomic) ISIcon *internalIcon;

- (id)initWithDate:(id)a0 calendar:(id)a1 format:(long long)a2;
- (id)initWithDateComponents:(id)a0 calendar:(id)a1 format:(long long)a2 forceNoTextEffects:(BOOL)a3;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (void).cxx_destruct;
- (id)prepareImageForDescriptor:(id)a0;
- (id)imageForDescriptor:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;

@end
