@interface WeatherMaps.MapScrubberGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ lastTranslation;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ feedbackGenerator;
}

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
