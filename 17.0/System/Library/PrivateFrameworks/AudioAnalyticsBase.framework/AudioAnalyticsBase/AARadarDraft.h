@class NSString, NSArray, AARadarComponent;

@interface AARadarDraft : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *problemDescription;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) AARadarComponent *component;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 problemDescription:(id)a1 attachments:(id)a2 component:(id)a3;
- (BOOL)sendForProcessNamed:(id)a0 withDisplayReason:(id)a1 completionHandler:(id /* block */)a2;

@end
