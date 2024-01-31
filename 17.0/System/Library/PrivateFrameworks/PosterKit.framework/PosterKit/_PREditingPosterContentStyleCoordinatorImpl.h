@class NSString, UIView;
@protocol PRPosterContentStyle;

@interface _PREditingPosterContentStyleCoordinatorImpl : NSObject <_PREditingPosterContentStyleCoordinatorImpl>

@property (retain, nonatomic) id<PRPosterContentStyle> style;
@property (nonatomic) double variation;
@property (nonatomic) double contentsLuminance;
@property (readonly, nonatomic) double itemViewLuminance;
@property (readonly, nonatomic) UIView *itemView;
@property (readonly, nonatomic) UIView *variationSliderThumbView;
@property (readonly, nonatomic) UIView *variationSliderTrackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(id)a0;
- (void).cxx_destruct;
- (id)variationSupportingStyle;

@end
