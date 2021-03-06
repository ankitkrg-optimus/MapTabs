//
//  SecondViewController.h
//  MapTabs
//
//  Created by optimusmac4 on 7/22/15.
//  Copyright (c) 2015 optimusmac4. All rights reserved.
//

#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>


@interface SecondViewController : UIViewController<MKMapViewDelegate>

@property (nonatomic, strong) CLLocationManager *locationManager;

@property (nonatomic,strong) CLLocation *location;

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@property (weak, nonatomic) IBOutlet UILabel *labelLatitude;

@property (weak, nonatomic) IBOutlet UILabel *labelLongitude;

@property (weak, nonatomic) IBOutlet UILabel *labelAltitude;

@property(nonatomic,strong) NSString *address;
@property(nonatomic,strong) NSString *address1;
@property(nonatomic,strong) NSString *address2;
@property(nonatomic,strong) NSString *address3;
@property(nonatomic,strong) NSString *address4;
@property(nonatomic,strong) NSString *address5;


- (IBAction)setMap:(id)sender;


@end
