@interface HPSBetaEnrollmentModelCoder : NSObject <HomePodSettings.MessageSerializing>

- (id)init;
- (id)serialize:(id)a0 error:(id *)a1;
- (BOOL)deserialize:(id)a0 withElement:(id)a1 error:(id *)a2;

@end
