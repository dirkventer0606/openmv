/*
 * This file is part of the OpenMV project.
 * Copyright (c) 2013/2014 Ibrahim Abdelkader <i.abdalkader@gmail.com>
 * This work is licensed under the MIT license, see the file LICENSE for details.
 *
 * qstrs specific to openmv
 *
 */

// Image module
Q(image)
Q(Image)
Q(rgb_to_lab)
Q(lab_to_rgb)
Q(rgb_to_grayscale)
Q(grayscale_to_rgb)
Q(HaarCascade)
Q(FREAK)
Q(LBP)
Q(search)
Q(SEARCH_EX)
Q(SEARCH_DS)
Q(EDGE_CANNY)
Q(EDGE_SIMPLE)
Q(load_descriptor)
Q(save_descriptor)
Q(match_descriptor)

// Image class
Q(copy)
Q(copy_to_fb)
Q(save)
Q(compress)
Q(compressed)
Q(width)
Q(height)
Q(format)
Q(size)
Q(get_pixel)
Q(set_pixel)
Q(draw_line)
Q(draw_rectangle)
Q(draw_circle)
Q(draw_string)
Q(draw_cross)
Q(draw_keypoints)
Q(binary)
Q(invert)
Q(and)
Q(nand)
Q(or)
Q(nor)
Q(xor)
Q(xnor)
Q(erode)
Q(dilate)
Q(negate)
Q(difference)
Q(replace)
Q(blend)
Q(morph)
Q(statistics)
Q(midpoint)
Q(mean)
Q(mode)
Q(median)
Q(gaussian)
Q(find_blobs)
Q(find_markers)
Q(midpoint_pool)
Q(midpoint_pooled)
Q(mean_pool)
Q(mean_pooled)
Q(find_template)
Q(find_displacement)
Q(kp_desc)
Q(lbp_desc)
Q(Cascade)
Q(histeq)
Q(mask_ellipse)
Q(find_features)
Q(find_keypoints)
Q(find_lbp)
Q(find_eye)
Q(find_lines)
Q(find_edges)
Q(find_hog)
Q(cmp_lbp)
Q(quality)
Q(color)
Q(roi)
Q(offset)
Q(threshold)
Q(mul)
Q(add)
Q(bias)
Q(percentile)
Q(feature_filter)
Q(margin)
Q(normalized)
Q(lens_corr)

// Lcd Module
Q(lcd)
Q(type)
Q(set_backlight)
Q(get_backlight)
Q(display)
Q(clear)

// FIR Module
Q(fir)
Q(read_ta)
Q(read_ir)
Q(draw_ta)
Q(draw_ir)
Q(alpha)
Q(scale)
Q(refresh)
Q(resolution)

// Gif module
Q(gif)
Q(Gif)
Q(open)
Q(add_frame)
Q(loop)

// Mjpeg module
Q(mjpeg)
Q(Mjpeg)

// Led Module
Q(led)
Q(RED)
Q(GREEN)
Q(BLUE)
Q(IR)
Q(on)
Q(off)
Q(toggle)

// Time Module
Q(time)
Q(ticks)
Q(sleep)
Q(clock)
Q(Clock)

// Clock
Q(tick)
Q(fps)
Q(avg)

//Sensor Module
Q(sensor)
Q(RGB565)
Q(YUV422)
Q(GRAYSCALE)
Q(JPEG)
Q(B40x30)
Q(B64x32)
Q(B64x64)
Q(QQCIF)
Q(QQVGA)
Q(QQVGA2)
Q(QCIF)
Q(HQVGA)
Q(QVGA)
Q(CIF)
Q(VGA)
Q(SVGA)
Q(SXGA)
Q(UXGA)
Q(OV9650)
Q(OV2640)
Q(OV7725)
Q(line_filter)

//SDE
Q(NORMAL)
Q(NEGATIVE)

Q(reset)
Q(snapshot)
Q(skip_frames)
Q(get_fb)
Q(get_id)
Q(set_pixformat)
Q(set_framerate)
Q(set_framesize)
Q(set_binning)
Q(set_windowing)
Q(set_gainceiling)
Q(set_contrast)
Q(set_brightness)
Q(set_saturation)
Q(set_quality)
Q(set_colorbar)
Q(set_whitebal)
Q(set_gain_ctrl)
Q(set_exposure_ctrl)
Q(set_hmirror)
Q(set_vflip)
Q(set_special_effect)
Q(set_lens_correction)
Q(__write_reg)
Q(__read_reg)

// GPIOS
Q(P1)
Q(P2)
Q(P3)
Q(P4)
Q(P5)
Q(P6)
Q(PA1)
Q(PA2)
Q(PA3)
Q(PA4)
Q(PA5)
Q(PA6)
Q(PA7)
Q(PA8)
Q(PB1)
Q(PB2)
Q(PB3)
Q(PB4)
Q(IN)
Q(OUT)
Q(gpio)
Q(GPIO)
Q(low)
Q(high)

// SPI
Q(spi)
Q(read)
Q(write)
Q(write_image)

// UART
Q(uart)

// File
Q(file)
Q(close)

//Wlan
Q(wlan)
Q(WEP)
Q(WPA)
Q(WPA2)
Q(init)
Q(connect)
Q(connected)
Q(ifconfig)
Q(patch_version)
Q(patch_program)
Q(socket)
Q(send)
Q(recv)
Q(bind)
Q(listen)
Q(accept)
Q(settimeout)
Q(setblocking)
Q(select)
Q(AF_INET)
Q(AF_INET6)
Q(SOCK_STREAM)
Q(SOCK_DGRAM)
Q(SOCK_RAW)
Q(IPPROTO_IP)
Q(IPPROTO_ICMP)
Q(IPPROTO_IPV4)
Q(IPPROTO_TCP)
Q(IPPROTO_UDP)
Q(IPPROTO_IPV6)
Q(IPPROTO_RAW)

// for WINC1500 module
Q(WINC)
Q(connect)
Q(disconnect)
Q(isconnected)
Q(ifconfig)
Q(fw_version)
Q(fw_dump)
Q(fw_update)
Q(scan)
Q(rssi)
Q(OPEN)
Q(WEP)
Q(WPA_PSK)
Q(802_1X)
Q(ssid)
Q(key)
Q(security)
Q(bssid)

// cpufreq Module
Q(cpufreq)
Q(CPUFREQ_120MHZ)
Q(CPUFREQ_144MHZ)
Q(CPUFREQ_168MHZ)
Q(CPUFREQ_192MHZ)
Q(CPUFREQ_216MHZ)
Q(get_frequency)
Q(set_frequency)
